import { connectDB } from "@/lib/mongodb";
import { Url } from "@/lib/models/Url";

export async function POST(request: Request) {
  const body = await request.json();

  const { originalUrl, shortCode } = body;

  await connectDB();

  const newUrl = await Url.create({
    originalUrl,
    shortCode,
  });

  return Response.json(newUrl);
}