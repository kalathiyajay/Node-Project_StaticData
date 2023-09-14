const express =require('express');
const productdata =require("./routes/product.routes.js");
const cartdata =require("./routes/cart.routes.js");
const userdata =require("./routes/user.routes.js");
const server =express();
const port =5000;


server.use(express.json());

server.use("/",productdata);
server.use("/",cartdata);
server.use("/",userdata);

server.listen(port,()=>{
    console.log(`Server Connected At Port ${port}`);
})