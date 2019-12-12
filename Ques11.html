<!--Beizer Curve -->
<html>
<body>
<canvas id="canvas" width="450" height="300" style="border:1px solid #a3a3a3"></canvas>
<script>
var canvas=document.getElementById("canvas")
var c=canvas.getContext("2d");
var tt=0;
var xc=260,yc=90;
function draw(){
c.clearRect(0,0,450,300);
c.fillStyle="#d9d9d9";
c.fillRect(0,0,450,300);
//drawing a beizer curve of degree two
var x0=120,y0=200,x1=xc,y1=yc,x2=360,y2=200;
var x=x0,y=y0;
//function to draw animated line
function drawAnimatedLine(){
c.strokeStyle="yellow";
c.beginPath();
x01=(x1-x0)*tt+x0;
x11=(x2-x1)*tt+x1;
y01=(y1-y0)*tt+y0;
y11=(y2-y1)*tt+y1;
tt=tt+0.005;
if(tt>=1)
tt=0;
c.moveTo(x01,y01);
c.lineTo(x11,y11);
c.stroke();
c.closePath();
c.fillStyle="red";
}
function dragPoints(ev){
xc=ev.clientX;
yc=ev.clientY;
} canvas.onmousemove=(evt)=>{dragPoints(evt)};
//drawing convex hull for curve
c.strokeStyle="green";
c.beginPath();
c.moveTo(x0,y0);
c.lineTo(x1,y1);
c.lineTo(x2,y2);
c.stroke();
//convex hull ends here
c.fillStyle="red";
c.beginPath();
for(var t=0.0;t<=1.0;t=t+0.005){
c.moveTo(x,y);
c.arc(x-1,y,1,0,2*Math.PI);
x= (t*t)*x0 + 2*(t*(1-t)) *x1 +(1-t)*(1-t)*x2;
y= (t*t)*y0 + 2*(t*(1-t)) *y1 +(1-t)*(1-t)*y2;
} c.moveTo(x,y);
c.arc(x-1,y,1,0,2*Math.PI);
c.fill();
drawAnimatedLine();
requestAnimationFrame(draw);
}
requestAnimationFrame(draw);
</script>
</body>
</html>
