// ************ Create Table ***************************

var table = document.createElement("table");
table.setAttribute("id", "Table");
var tZone = document.getElementById("tableZone");
tZone.appendChild(table);

var tbdy = document.createElement('tbody');
var tr = document.createElement('tr');


// *********** Custom Data objects array*****************
var Datas=[
{date:"2015-25-03",market:"Sparapet", product:"bread", price:"500"},
{date:"2012-17-05",market:"Arevik",   product:"cake",  price:"1800"}, 
{date:"2005-05-01" ,market:"GrinPlaza",product:"soap",  price:"3645"},
{date:"2015-13-09",market:"Voskya",  product:"hat",    price:"8500"},
{date:"2015-25-06",market:"Vega",    product:"wash-machine", price:"4530"},
{date:"2015-18-11",market:"Proshyan",product:"wine",   price:"50050"},    
{date:"2015-05-01",market:"Evrika",  product:"coffee", price:"50350"},
{date:"2015-13-12",market:"Smayl",   product:"sweets", price:"2500"}
];

var fields=["Date", "Market", "Product", "Price"];
for (field in fields) {
		  var th = document.createElement("th");
		  var t=document.createTextNode(fields[field]);

		  th.appendChild(t);
		  tbdy.appendChild(th);
		  table.appendChild(tbdy);
}





// print ani array
function printArr(Datas)  {
		  for (obj in Datas) {
					 var tr = document.createElement('tr');
					 for( key in Datas[obj]) {
								var td = document.createElement('td');
								var productObj = Datas[obj];
								td.appendChild(document.createTextNode(productObj[key]));
								tr.appendChild(td);

					 }
					 // Delete row button 
					 td = document.createElement('td');
					 button = document.createElement("BUTTON");
					 del = document.createTextNode("-");
					 button.appendChild(del);
					 td.style.borderRight="hidden";
					 td.style.borderTop="hidden";
					 td.style.borderBottom = "hidden";
					 td.setAttribute("onclick", "deleteRow(this)");
					 td.appendChild(button);

					 tr.appendChild(td);
					 tbdy.appendChild(tr);
					 table.appendChild(tbdy);
		  }
}

printArr(Datas);

function addRow () {

		  var tr = document.createElement('tr');
		  prDate=document.getElementById("date").value;
		  prMarket=document.getElementById("market").value;
		  prProduct=document.getElementById("product").value;
		  prPrice=document.getElementById("price").value;
		  var productData={date: prDate, market:prMarket, product: prProduct, price: prPrice};
		  for( key in productData) {
					 var td = document.createElement('td');
					 td.appendChild(document.createTextNode(productData[key]));
					 tr.appendChild(td);

		  }
		  tbdy.appendChild(tr);
		  table.appendChild(tbdy);					
}

function deleteRow (row) {
		  var i = row.parentNode.parentNode.rowIndex;
		  document.getElementById("Table").deleteRow(i);
}
