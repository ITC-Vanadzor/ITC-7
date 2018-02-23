var table = document.createElement('table');
table.setAttribute("id","myTable");
for (var i = 1; i < 4; i++){
    var tr = document.createElement('tr');   

    var td1 = document.createElement('td');
    var td2 = document.createElement('td');

    var text1 = document.createTextNode('Text1');
    var text2 = document.createTextNode('Text2');

    td1.appendChild(text1);
    td2.appendChild(text2);
    tr.appendChild(td1);
    tr.appendChild(td2);

    table.appendChild(tr);
}
document.body.appendChild(table);
var countAdd = (function() {
        var counterAdd=3;
        return function() {
                return counterAdd+=1;
        }
})()
var countDel = (function() {
        var counterDel=0;
        return function() {
                return counterDel+=1;
        }
})()
function diffRows(add,del) {
	return add -del;
}
function addRow() {
    var table = document.getElementById("myTable");
    var row = table.insertRow(0);
    var cell1 = row.insertCell(0);
    var cell2 = row.insertCell(1);
    cell1.innerHTML = "New text1";
    cell2.innerHTML = "NEW text2";
    countAdd();
}
function deleteRow() {
    if(diffRows(countAdd(),countDel()) == 0)
    	alert("What are you doing man???");
    else {
	document.getElementById("myTable").deleteRow(0);
	countDel();
    }
}
