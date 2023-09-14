const cart =require("../Data/cart.json");

exports.getAllcart=(req,res)=>{
    res.json(cart);
};

exports.getCart=(req,res)=>{
    let ID =+req.params.id;
    let cartIndex = cart.find((p)=>p.id===ID)
    res.json({cartIndex});
};

exports.addCart=(req,res)=>{
    let add = req.body;
    cart.push(add);
    res.json(add);
};

exports.removeCart=(req,res)=>{
    let ID = +req.params.id;
    let cartIndex =cart.findIndex((p)=>p.id===ID);
    cart.splice(cartIndex,1,{...req.body});
    res.json({...req.body});
};

exports.updateCart=(req,res)=>{
    let ID = +req.params.id;
    let cartIndex =cart.findIndex((p)=>p.id===ID);
    ca=cart[cartIndex];
    ca=-cart.splice(cartIndex,1,{...ca,...req.body});
    res.json({ca});
};

exports.deleteCart=(req,res)=>{
    let ID = +req.params.id;
    let cartIndex =cart.findIndex((p)=>p.id===ID);
    cart.splice(cartIndex,1);
    res.json({Massage:"Cart Data Is Deleted"});
};