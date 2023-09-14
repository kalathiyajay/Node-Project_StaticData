const express =require('express');
const routes =express.Router();
const {getAllCart,getCart,addCart,removeCart,updateCart,deleteCart} =require("../contoller/cart.contoller.js");

routes.get("/cart",getAllCart);
routes.get("/cart/:id",getCart);
routes.post("/cart",addCart);
routes.put("/cart/:id",removeCart);
routes.patch("/cart/:id",updateCart);
routes.delete("/cart/:id",deleteCart);


module.exports=routes;