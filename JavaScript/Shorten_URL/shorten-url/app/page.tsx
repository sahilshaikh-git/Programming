"use client";

import { useState } from "react";

export default function Home() {
  const [url, setUrl] = useState("");
  const [shortUrl, setShortUrl] = useState("");
  const [error, setError] = useState("");
  const [copied, setCopied] = useState(false);
  const [ loading  ,  setLoading ] = useState(false);

  const characters =
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890";

  async function shortenurl() {
    if (url === "") {
      setError("Please enter a URL");
      setShortUrl("");
      return;
    }

    try {
      const validUrl = new URL(url);

      if (
        validUrl.protocol !== "http:" &&
        validUrl.protocol !== "https:"
      ) {
        setError("Only https and http are allowed");
        setShortUrl("");
        return;
      }

      setError("");
    } catch {
      setError("Invalid URL");
      setShortUrl("");
      return;
    }

    let shortCode = "";
    let i = 1;

    while (i <= 6) {
      shortCode =
        shortCode +
        characters[Math.floor(Math.random() * characters.length)];

      i++;
    }
    setError("");
    setLoading(true);

    try {
  const response = await fetch("/api/shorten", {
    method: "POST",
    headers: {
      "Content-Type": "application/json",
    },
    body: JSON.stringify({
      originalUrl: url,
      shortCode: shortCode,
    }),
  });

  const data = await response.json();

  if (!response.ok) {
    setError(data.error || "Failed to shorten URL");
    return;
  }

  setShortUrl(data.shortCode);
  setCopied(false);
} catch (error) {
  setError("Something went wrong. Please try again.");
} finally {
  setLoading(false);
}


  }

  function copyUrl() {
    if (shortUrl === "") {
      return;
    }

    
const fullUrl = `${window.location.origin}/${shortUrl}`;


    navigator.clipboard
      .writeText(fullUrl)
      .then(() => {
        console.log("Copied successfully");
        setCopied(true);
      })
      .catch((error) => {
        console.log("Copy failed");
        console.log(error);
      });
  }

  

return (
  <main className="min-h-screen overflow-x-hidden bg-[#f8f7f3] p-2 text-[#171717] sm:p-5">
    <div className="relative mx-auto min-h-[94vh] max-w-[1500px] overflow-hidden rounded-2xl border border-white bg-[#fdfcf9] px-4 py-6 shadow-[0_0_35px_rgba(140,155,255,0.25)] sm:rounded-[24px] sm:px-10 sm:py-8">

      {/* Navigation */}
      <nav className="mx-auto flex max-w-6xl items-center justify-between gap-3">
        <a
          href="/"
          className="shrink-0 font-serif text-xl tracking-tight sm:text-2xl"
        >
          <span className="mr-1">↗</span> linkly
        </a>

        <div className="hidden items-center gap-6 rounded-full border border-black/10 px-6 py-3 text-sm text-neutral-600 md:flex">
          <a href="#features" className="transition hover:text-black">
            Features
          </a>
          <a href="#how-it-works" className="transition hover:text-black">
            How it works
          </a>
          <a href="#about" className="transition hover:text-black">
            About
          </a>
        </div>

        <a
          href="#shortener"
          className="shrink-0 rounded-full bg-black px-3 py-2.5 text-xs text-white transition hover:bg-neutral-700 sm:px-5 sm:py-3 sm:text-sm"
        >
          Get started ↗
        </a>
      </nav>

      {/* Hero section */}
      <section className="mx-auto mt-16 max-w-5xl text-center sm:mt-24">
        <h1 className="font-serif text-4xl leading-[1.08] tracking-[-0.045em] sm:text-6xl sm:leading-[1.02] lg:text-8xl">
          Less clutter.
          <br />
          <span className="italic">More meaningful links.</span>
        </h1>

        <p className="mx-auto mt-5 max-w-lg text-sm leading-6 text-neutral-500 sm:mt-6 sm:text-lg sm:leading-7">
          Turn long URLs into clean, shareable links in seconds.
        </p>

        {/* URL shortener form */}
        <div
          id="shortener"
          className="mx-auto mt-8 max-w-2xl scroll-mt-8 rounded-2xl border border-black/[0.07] bg-white/90 p-4 text-left shadow-[0_8px_30px_rgba(0,0,0,0.04)] sm:mt-10 sm:rounded-3xl sm:p-6"
        >
          <label
            htmlFor="url"
            className="mb-3 block text-sm font-medium text-neutral-800"
          >
            Your long URL
          </label>

          <form
            onSubmit={(e) => {
              e.preventDefault();
              if (!loading) shortenurl();
            }}
            className="flex flex-col gap-3 sm:flex-row"
          >
            <input
              id="url"
              type="url"
              value={url}
              onChange={(e) => setUrl(e.target.value)}
              placeholder="https://example.com/your-long-link"
              autoComplete="url"
              className="min-h-12 min-w-0 w-full flex-1 rounded-full border border-neutral-200 bg-white px-4 py-3 text-base outline-none transition placeholder:text-sm placeholder:text-neutral-400 focus:border-neutral-500 focus:ring-2 focus:ring-neutral-100 sm:px-5"
            />

            <button
              type="submit"
              disabled={loading}
              className="min-h-12 w-full shrink-0 rounded-full bg-black px-6 py-3 text-sm font-medium text-white transition hover:bg-neutral-700 disabled:cursor-not-allowed disabled:opacity-60 sm:w-auto"
            >
              {loading ? "Shortening..." : "Shorten URL →"}
            </button>
          </form>

          {error && (
            <p
              role="alert"
              className="mt-3 break-words text-sm text-red-600"
            >
              {error}
            </p>
          )}

          {/* Short URL result */}
          {shortUrl && (
            <div className="mt-5 rounded-2xl border border-black/[0.05] bg-[#f6f6f3] p-3 sm:p-4">
              <p className="mb-3 text-xs font-medium uppercase tracking-wider text-neutral-500">
                Your shortened link
              </p>

              <div className="flex flex-col gap-3 sm:flex-row sm:items-center sm:justify-between">
                <a
                  href={`/${shortUrl}`}
                  target="_blank"
                  rel="noopener noreferrer"
                  className="min-w-0 break-all px-1 text-sm font-medium text-neutral-900 underline decoration-neutral-300 underline-offset-4 transition hover:decoration-black sm:flex-1"
                >
                  {window.location.origin}/{shortUrl}
                </a>

                <button
                  type="button"
                  onClick={copyUrl}
                  className="min-h-11 w-full shrink-0 rounded-full border border-neutral-300 bg-white px-5 py-2.5 text-sm font-medium transition hover:bg-neutral-100 sm:w-auto"
                >
                  {copied ? "✓ Copied!" : "Copy link"}
                </button>
              </div>
            </div>
          )}
        </div>
      </section>

      {/* Feature cards */}
      <section
        id="features"
        className="mx-auto mt-12 grid max-w-5xl scroll-mt-8 grid-cols-1 gap-4 sm:mt-20 sm:grid-cols-2 sm:gap-5"
      >
        <article className="rounded-2xl border border-black/[0.07] bg-white/70 p-5 transition duration-300 hover:-translate-y-1 sm:p-6">
          <span className="text-xl" aria-hidden="true">
            ↗
          </span>
          <h2 className="mt-3 font-serif text-xl sm:mt-4 sm:text-2xl">
            Share with ease
          </h2>
          <p className="mt-2 text-sm leading-6 text-neutral-500">
            One simple link, ready to share anywhere.
          </p>
        </article>

        <article className="rounded-2xl border border-black/[0.07] bg-white/70 p-5 transition duration-300 hover:-translate-y-1 sm:p-6">
          <span className="text-xl" aria-hidden="true">
            ✳
          </span>
          <h2 className="mt-3 font-serif text-xl sm:mt-4 sm:text-2xl">
            Fast and simple
          </h2>
          <p className="mt-2 text-sm leading-6 text-neutral-500">
            Shorten. Copy. Share.
          </p>
        </article>
      </section>

      {/* How it works */}
      <section
        id="how-it-works"
        className="mx-auto mt-12 max-w-5xl scroll-mt-8 text-center sm:mt-16"
      >
        <h2 className="font-serif text-2xl sm:text-3xl">
          Three steps. One simple link.
        </h2>

        <div className="mt-6 grid grid-cols-1 gap-4 text-left sm:grid-cols-3">
          <div className="rounded-xl border border-black/[0.06] p-4">
            <p className="text-xs text-neutral-400">01</p>
            <p className="mt-2 font-medium">Paste your URL</p>
            <p className="mt-1 text-sm text-neutral-500">
              Add the long link you want to shorten.
            </p>
          </div>

          <div className="rounded-xl border border-black/[0.06] p-4">
            <p className="text-xs text-neutral-400">02</p>
            <p className="mt-2 font-medium">Create your link</p>
            <p className="mt-1 text-sm text-neutral-500">
              Generate a unique short link.
            </p>
          </div>

          <div className="rounded-xl border border-black/[0.06] p-4">
            <p className="text-xs text-neutral-400">03</p>
            <p className="mt-2 font-medium">Copy and share</p>
            <p className="mt-1 text-sm text-neutral-500">
              Share your link wherever you need it.
            </p>
          </div>
        </div>
      </section>

      {/* Footer */}
      <footer
        id="about"
        className="mt-12 border-t border-black/[0.07] pt-6 text-center sm:mt-16"
      >
        <p className="font-serif text-lg">linkly ↗</p>
        <p className="mt-2 text-xs leading-5 text-neutral-400">
          Built with Next.js and MongoDB.
        </p>
      </footer>
    </div>
  </main>
);


}