import { connectDB } from "@/lib/mongodb";
import { Url } from "@/lib/models/Url";

export async function POST(request: Request) {
  const body = await request.json();

  const { originalUrl, shortCode } = body;

  await connectDB();

  let uniqueCode = shortCode; 

  while ( await Url.findOne ({ shortCode : uniqueCode})) {
        uniqueCode =  Math.random().toString(36).substring(2,8) ;

  }




  const newUrl = await Url.create({
    originalUrl,
    shortCode : uniqueCode,
  });

  return Response.json(newUrl);
}