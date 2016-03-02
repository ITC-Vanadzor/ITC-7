var textCell = 0;
clickCount=(function () 
	{ var counter = 0;
	    return function () {return counter += 1}
	})()

function creatTable(person){
    if (clickCount() == 1) {
	var bd = document.getElementById("my");
	var newTable = document.createElement("table");
	newTable.setAttribute('id', 'tl');
	newTable.setAttribute('width', '500');
	newTable.setAttribute('border', '5');
	newTable.setAttribute('border-color', 'black');
	newTable.setAttribute('text-align', 'center');
	for (var i = 0; i < 2; ++i) {
	    var row = newTable.insertRow(-1);
	    for (var j = 0; j < 2; ++j) {
		var cellHeader = row.insertCell(-1);
		cellHeader.innerHTML = textCell;
		textCell++;
	    }
	}
	if (newTable != null) {
	    bd.appendChild(newTable);
	} else {
	    console.log (":(((((((((((((((((")
	}
    } else {
	alert("You have already created table, please insert rows or columns")
    }
}

function addRows() {
    if (document.getElementById("tl") != null) {
	var newTable = document.getElementById("tl");
	var row = newTable.insertRow(-1);
	for (var j = 0; j < newTable.rows[0].cells.length; ++j) {
	    var cellHeader = row.insertCell(-1);
	    cellHeader.innerHTML = textCell;
	    textCell++;
	}
    } else {
	alert ("Please reload page and create table");
    }
}

function addColumn(){
    if (document.getElementById("tl") != null) {
	var newTable = document.getElementById("tl")
	    for (var i = 0; i < newTable.rows.length; ++i) {
		var newTH = document.createElement('th');
		newTable.rows[i].appendChild(newTH);
		newTH.innerHTML = textCell;
		textCell++;
	    }
    }
}

function deleteRows() {
    var newTable = document.getElementById("tl");
    if (newTable.rows.length != 0) {
	newTable.deleteRow(0);
    } else {
	alert("The table already removed");
    }
}

function deleteColumn() {
    var newTable = document.getElementById("tl");
    var allRows = newTable.rows;

    if (newTable.rows.length != 0) {
	for (var i = 0; i < allRows.length; i++) {
	    allRows[i].deleteCell(-1);
	}
    } else {
	alert("The table already removed");
    }
}

