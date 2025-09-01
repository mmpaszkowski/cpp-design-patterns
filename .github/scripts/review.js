import OpenAI from "openai";
import fs from "fs";

const client = new OpenAI({ apiKey: process.env.OPENAI_API_KEY });

const diff = fs.readFileSync(process.env.GITHUB_EVENT_PATH, "utf8");

const response = await client.chat.completions.create({
  model: "gpt-5",
  messages: [
    { role: "system", content: "You are a code reviewer." },
    { role: "user", content: `Review this PR diff:\n${diff}` }
  ]
});

console.log(response.choices[0].message.content); 
