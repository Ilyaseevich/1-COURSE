function Onclick(){
    let foot = document.getElementById("foot");
    foot.style.display = "block";
    let form = document.getElementById("form");
    let info = document.forms[0].elements;
    console.log(info);
    
    let element = "<h3>Данные о студенте: </h3>";
    element += "<p>Имя: " + document.forms[0].elements[0].value + "</p>";
    element += "<p>Фамилия: " + document.forms[0].elements[2].value + "</p>";
    element += "<p>Отчество: " + document.forms[0].elements[1].value + "</p>";
    element += "<p>Адрес почты: " + document.forms[0].elements[3].value + "</p>";
    element += "<p>Контактный номер: " + document.forms[0].elements[4].value + "</p>";
    element += "<p>Социальные сети: ";
    for (let i = 5; i <= 7; i++) {
        if(document.forms[0].elements[i].checked)
            element += document.forms[0].elements[i].value + " ";
    }
    element += "</p>";
    element += "<p>Курс: " + document.forms[0].elements[8].value + "</p>";
    element += "<p>Факультет: " + document.forms[0].elements[9].value + "</p>";
    element += "<p>Группа: " + document.forms[0].elements[10].value + "</p>";
    foot.innerHTML = element;
}