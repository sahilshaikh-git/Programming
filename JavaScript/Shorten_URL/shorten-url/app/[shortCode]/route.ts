import { connectDB} from "@/lib/mongodb";
import { Url } from "@/lib/models/Url" ;

export async function GET(
  request: Request,
  context: { params: Promise<{ shortCode: string }> }
) {
  const { shortCode } = await context.params;

  await connectDB();

  const urlData = await Url.findOne({ shortCode });

  if (!urlData) {
    return Response.json(
      { error: "Short URL not found" },
      { status: 404 }
    );
  }

  return Response.redirect(urlData.originalUrl);
}