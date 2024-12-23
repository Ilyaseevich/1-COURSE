let flag = false;
let object = null;

let element = document.getElementsByTagName('img');
console.log(element);
document.addEventListener('mousedown', function() {
  flag = true;
  object = target;
})

document.addEventListener('mousemove', function() {
  if(flag){
    object.style.left = clientX + "px";
  }
})

document.addEventListener('mouseup', function() {
  flag = false;
})
