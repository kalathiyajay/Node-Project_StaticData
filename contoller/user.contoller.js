const user =require("../Data/user.json");

exports.getallUser=(req,res)=>{
    res.json(user);
};

exports.getUser=(req,res)=>{
    let ID = +req.params.id;
    let userIndex = user.find((p)=>p.id===ID);
    res.json(userIndex);
};

exports.adduUer=(req,res)=>{
    let adddata =req.body;
    user.push(adddata);
    res.json(adddata);
};

exports.removeUser=(req,res)=>{
    let ID = +req.params.id;
    let userIndex =user.findIndex((p)=>p.id===ID);
    user.splice(userIndex,1,{...req.body});
    res.json({...req.body});
};

exports.updateUser=(req,res)=>{
    let ID = +req.params.id;
    let userIndex =user.findIndex((p)=>p.id===ID);
    us=user[userIndex];
    us=user.splice(userIndex,1,{...us,...req.body});
    res.json({us});
};

exports.deleteUser=(req,res)=>{
    let ID = +req.params.id;
    let userIndex =user.findIndex((p)=>p.id===ID);
    user.splice(userIndex,1);
    res.json({message :"Product Data Is Deleted"});
}

