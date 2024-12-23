//Задание 1
let img_1 = document.getElementById("photo_1")

img_1.onmouseover = function onmouse(){
    img_1.children[0].src = "";
    img_1.children[1].style.display = "block";
}

img_1.onmouseout = function out(){
    img_1.children[0].src ="https://avatars.mds.yandex.net/get-mpic/4304254/img_id7146378333569916543.jpeg/orig";
    img_1.children[1].style.display = "none";
}

let img_2 = document.getElementById("img_2");

img_2.onclick = function click(){
    if(img_2.style.outline === ""){
        img_2.style.outline = "10px solid red";
    }else{
        img_2.style.outline = ""
    }
}

let img_3 = document.getElementById("img_3");

img_3.onmouseover = function over(){
    img_3.src = "https://avatars.mds.yandex.net/i?id=b9400256be490d5a573d6acb6afd905c5b83e31a-3734590-images-thumbs&n=13";
    img_3.style.width = "360px";
}

img_3.onmouseout = function out_img(){
    img_3.src = "https://kuda-spb.ru/uploads/7722cf01bab5c04f550d341c5879369e.jpg";
    img_3.style.width = "300px";
}