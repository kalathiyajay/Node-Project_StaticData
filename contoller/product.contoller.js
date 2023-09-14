const product = require("../Data/product.json");

exports.getallProduct=(req,res)=>{
    res.json(product);
};

exports.getProduct=(req,res)=>{
    let ID = +req.params.id;
    let productIndex = product.find((p)=>p.id===ID);
    res.json(productIndex);
};

exports.addProduct=(req,res)=>{
    let adddata =req.body;
    product.push(adddata);
    res.json(adddata);
};

exports.removeProduct=(req,res)=>{
    let ID = +req.params.id;
    let productIndex =product.findIndex((p)=>p.id===ID);
    product.splice(productIndex,1,{...req.body});
    res.json({...req.body});
};

exports.updateProduct=(req,res)=>{
    let ID = +req.params.id;
    let productIndex =product.findIndex((p)=>p.id===ID);
    pr=product[productIndex];
    pr=product.splice(productIndex,1,{...pr,...req.body});
    res.json({pr});
};

exports.deleteProduct=(req,res)=>{
    let ID = +req.params.id;
    let productIndex =product.findIndex((p)=>p.id===ID);
    product.splice(productIndex,1);
    res.json({message :"Product Data Is Deleted"});
}

