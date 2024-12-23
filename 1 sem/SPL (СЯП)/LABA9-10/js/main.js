let flag = false;
let object = null;

let elements = document.getElementsByClassName('draggable');
for (var i = 0; i < elements.length; i++) {
  elements[i].addEventListener('mousedown', function() {
    flag = true;
    object = event.target;
  });
}

document.addEventListener('mousemove', function() {
  if (flag && object) {
    object.style.top = event.clientY + 'px';
    object.style.left = event.clientX + 'px';
  }
});

document.addEventListener('mouseup', function() {
  flag = false;
  object = null;
});
