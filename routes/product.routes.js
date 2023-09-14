const express =require('express');
const route =express.Router();
const {getallProduct,getProduct,addProduct,removeProduct,updateProduct,deleteProduct} =require("../contoller/product.contoller.js");

route.get("/product",getallProduct);
route.get("/product/:id",getProduct);
route.post("/product",addProduct);
route.put("/product/:id",removeProduct);
route.patch("/product/:id",updateProduct);
route.delete("/product/:id",deleteProduct);


module.exports=route;