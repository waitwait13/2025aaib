// week12_1_happy_bubble_3D_part1
// 用到大二才會教的內容(英文比較難, 老師加中文註解)
void setup(){
  size(300,300,P3D); // 開啟3D功能
}
void draw(){
  background(255); // 白色背景
  
  pushMatrix(); // 備分註解
  translate(mouseX,mouseY); // 照著滑鼠座標動
  sphere(60); // 半徑60的圓球
  popMatrix(); // 還原矩陣
}
