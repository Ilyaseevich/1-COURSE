//$1— это содержимое первой захватывающей группы, то есть текст между[u]и[/u]`
// "любой символ (.) ноль или более раз (*), но как можно меньше (?)."
// g: Глобальный поиск, чтобы заменить все вхождения в строке. -i: Игнорирование регистра. -m многострочный флаг, позволяющий работать с многострочными текстами.
// <a\b: Начало тега <a> с границей слова (\b), чтобы избежать совпадений с тегами, содержащими a в других местах.
// [^>]*: Любые символы, кроме >, ноль или более раз.
//\w+ соответствует одному или более символам слова (буквы, цифры или подчеркивания).
// , соответствует запятой и пробелу.
// (\w+) и (\w+) — это захватывающие группы, которые сохраняют найденные слова для последующего использования.
$("#task_1").click(function() {
    let regex = /hello.world/s; //регулярное выражение
    let hel = "hello\nworld!!!";
    console.log(hel);
    console.log(regex);
    console.log(regex.test(hel));
})

$("#task_2").click(function() {
    let text = '[u]Специальный текст[/u]';
    console.log(text);
    let result = text.replace(/\[u\](.*?)\[\/u\]/gi, '<u>$1</u>') 
    console.log(result);
})

$("#task_3").click(function(){
    let text = "<a href=''>Страница 1</a>\n<a href=''>Страница 2</a>";
    console.log(text);
    let result = text.replace(/<a\b[^>]*>/gi, 'Замена ');
    console.log(result);
})

$("#task_4").click(function(){
    let text = 'Roman, Ilyaseevich';
    console.log(text);
    let result = text.replace(/(\w+), (\w+)/, '$2, $1');
    console.log(result);
})

$("#task_5").click(function(){
    let obj = {
        name: "Aндрей",
        age: 18,
        country: 'Belarus',
        student: "БГТУ"
    }
    let{name, age, ...rest} = obj; //Деструктуризация объекта
    console.log("Эллементы, которые были удалены: ", {name, age});
    console.log("Эллементы, которые остались: ", rest);
})

$("#task_6").click(function(){
    let obj = {
        name: "Aндрей",
        age: 18,
        country: 'Belarus',
        student: "БГТУ"
    }
    console.log(obj);
    let{name, age, ...rest} = obj;
    console.log("Эллементы, которые были удалены: ", {name, age});
    console.log("Эллементы, которые остались: ", rest);
    let change_obj = {
        ...rest,
        myname: "Роман",
        surname: "Ильясеевич"
    }
    console.log(change_obj);
    
})


