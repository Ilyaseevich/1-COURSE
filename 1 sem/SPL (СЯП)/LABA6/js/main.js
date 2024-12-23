let windowss = {};

function WindowsOpen(name) {
  if (!windowss[name] || windowss[name].closed) {
    windowss[name] = window.open("about:blank", name, "width=300, height=450")
    windowss[name].document.write("Этот сайт с именем: " + name);
  }else {
    windowss[name].focus();
  }
}

function WindowsClose(name){
  if (windowss[name] && !windowss[name].closed){
    windowss[name].close();
  }
}

function Print(name, text) {
  if (windowss[name] && !windowss[name].closed){
    windowss[name].document.write("<br>" + text);
  }
}

function task() {
  let table = document.getElementsByTagName('table')[0];
  let data = "<tr><td>Свойства</td><td>Значение</td></tr>";
  data += "<tr><td>navigator.userAgent</td><td>" + navigator.userAgent + "</td></tr>";
  data += "<tr><td>navigator.appVersion</td><td>" + navigator.appVersion + "</td></tr>";
  data += "<tr><td>navigator.appName</td><td>" + navigator.appName + "</td></tr>";
  data += "<tr><td>navigator.appCodeName</td><td>" + navigator.appCodeName + "</td></tr>";
  data += "<tr><td>navigator.platform</td><td>" + navigator.platform + "</td></tr>";
  data += "<tr><td>navigator.javaEnabled()</td><td>" + navigator.javaEnabled() + "</td></tr>";
  data += "<tr><td>screen.width</td><td>" + screen.width + "</td></tr>";
  data += "<tr><td>screen.height</td><td>" + screen.height + "</td></tr>";
  data += "<tr><td>screen.colorDepth</td><td>" + screen.colorDepth + "</td></tr>";
  data += "<tr><td>history</td><td>" + history + "</td></tr>";
  console.log(history);
  data += "<tr><td>location.href</td><td>" + location.href + "</td></tr>";
  data += "<tr><td>location.pathname</td><td>" + location.pathname + "</td></tr>";
  data += "<tr><td>location.host</td><td>" + location.host + "</td></tr>";
  console.log(location.host);
  console.log(location);
  table.innerHTML = data;

}
