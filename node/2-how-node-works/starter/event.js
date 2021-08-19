const EventEmitter = require("events");

const myEmitter = new EventEmitter();

class Sales exetends EventEmitter {
  constructor() { super(); }
}

myEmitter.on("newSale", () => { console.log("THer was a new sale!"); });

myEmitter.on("newSale", () => { console.log(" consumer name: dsd"); });

myEmitter.on("newSale", stock => {console.log(
                            `Therr are now ${stock} items left in stocks`)});

myEmitter.emit("newSale");
