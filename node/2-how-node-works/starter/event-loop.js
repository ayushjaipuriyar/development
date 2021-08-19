const fs = require("fs");

setTimeout(() => console.log("Timer 1 finished"), 0);
setImmediate(() => console.log("immediate 1 finished"));

fs.readFile("./test-file.txt", () => {
  console.log("I/O finished");
});

console.log("Helloe form the top level code");
