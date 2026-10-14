import mongoose from "mongoose";
import { unique } from "next/dist/build/utils";

const urlSchema = new mongoose.Schema({
  originalUrl: {
    type: String,
    required: true,
  },

  shortCode: {
    type: String,
    required: true,
    unique : true ,
  },
});

export const Url =
  mongoose.models.Url || mongoose.model("Url", urlSchema);