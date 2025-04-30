// week11_5_happy_bibble_part
PImage toy1,toy2,toy3; // 變數宣告
// int a,b; 很像之前教過的 int 變數宣告
void setup(){
  size(400,495);
  toy1 = loadImage("toy1.jpg");
  toy2 = loadImage("toy2.jpg");
}
void draw(){
  background(toy1); // 把1張圖當背景, 長寬要相同
  if(mousePressed && toy3 != null) image(toy3,mouseX-30,mouseY-30); // 再秀第2張圖N
}
void mousePressed(){
  toy3 = toy2.get(mouseX-30,mouseY-30,60,60);
}
