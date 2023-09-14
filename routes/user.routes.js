const express =require("express");
const routes =express.Router();
const {getallUser,getUser,addUser,removeUser,updateUser,deleteUser} =require("../contoller/user.contoller.js")

routes.get("/user",getallUser);
routes.get("/user/:id",getUser);
routes.post("/user",addUser);
routes.put("/user/:id",removeUser);
routes.patch("/user/:id",updateUser);
routes.delete("/user/:id",deleteUser);


module.exports=routes;