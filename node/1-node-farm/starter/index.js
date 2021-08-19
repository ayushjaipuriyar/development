const fs = require("fs");
const { createServer } = require("tls");
const http = require("http");
const url = require("url");
const { parse: parseQuery } = require("querystring");
const serverOrigin = "http://localhost:8000";
// const { log } = require("util");
// Synchronus
// const textIn = fs.readFileSync("./txt/input.txt", "utf-8");
// console.log(textIn);
// const textOut = `This is what we knoe about avacado: ${textIn}.\Created on
// ${Date.now()}`; fs.writeFileSync("./txt/output.txt", textOut);
// console.log("FIle written");

// Non sync
// fs.readFile("./txt/start.txt", "utf-8", (err, data1) => {
//  fs.readFile(`./txt/${data1}.txt`, "utf-8", (err, data2) => {
//    console.log(data2);
//    fs.readFile("./txt/append.txt", "utf-8", (err, data3) => {
//      console.log(data3);
//      fs.writeFile(
//        "./txt/final.txt",
//        `${data2}\n${data3}\n`,
//        "utf-8",
//        (err) => {
//          console.log("Your file has been written");
//        }
//      );
//    });
//  });
//} =);
// console.log("Will read this");

//////////////////////////////////////////////////////////
// Server

const replaceTemplate = (temp, product) => {
  let output = temp.replace(/{%PRODUCT_NAME%}/g, product.productName);
  output = output.replace(/{%IMAGE%}/g, product.image);
  output = output.replace(/{%PRICE%}/g, product.price);
  output = output.replace(/{%NUTRIENTS%}/g, product.nutrients);
  output = output.replace(/{%QUANTITY%}/g, product.quantity);
  output = output.replace(/{%FROM%}/g, product.from);
  output = output.replace(/{%DESCRIPTION%}/g, product.description);
  output = output.replace(/{%ID%}/g, product.id);

  if (!product.organic)
    output = output.replace(/{%NOT_ORGANIC%}/g, "not-organic");
  return output;
};

const tempOverview = fs.readFileSync("./templates/overview.html", "utf-8");
const tempCard = fs.readFileSync("./templates/card.html", "utf-8");
const tempProduct = fs.readFileSync("./templates/product.html", "utf-8");

const data = fs.readFileSync(`${__dirname}/dev-data/data.json`, "utf-8");
const dataObj = JSON.parse(data);

const server = http.createServer((req, res) => {
  const url = new URL(req.url, serverOrigin);

  const query = parseQuery(url.search.substr(1));
  const pathName = req.url;
  // Overview
  if (pathName === "/" || pathName === "/overview") {
    res.writeHead(200, { "Content-type": "text/html" });
    const cardsHtml = dataObj
      .map((el) => replaceTemplate(tempCard, el))
      .join("");
    const output = tempOverview.replace("{%PRODUCT_CARDS%}", cardsHtml);
    res.end(output);

    // Product
    // } else if (pathName === '/product') {
    // 	res.writeHead(200, { 'Content-type': 'text/html' });
    // 	const product = dataObj[query.id];
    // 	console.log(product);
    // 	const output = replaceTemplate(tempProduct, product);
    // 	res.end(output);
  } else if (pathName === "/product") {
    res.writeHead(200, { "Content-type": "text/html" });
    const product = dataObj[query.id];
    console.log(product);
    res.end(output);

    // API
  } else if (pathName === "/api") {
    res.writeHead(200, { "Content-type": "application/json" });
    res.end(data);
  } else {
    res.writeHead(404);
    res.end("Page not found");
  }
});

server.listen(8000, "127.0.0.1", () => {
  console.log("Listening to requests on port 8000");
});
