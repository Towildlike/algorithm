递推
过河卒(遵循象棋规则)
A点(记为(0,0))有一个过河卒，需要走到目标B点，卒只能向下或向右移动，在棋盘中任意一点上有一个对方的马，记为C点。马所在的点和所有跳跃一步可达的点称为对方马的控制点。
输入B点坐标(n,m)以及对方马的坐标(x,y),马的坐标一定在棋盘范围内，但可能落在边界上
输出小卒从A点到B点的路径条数
例如：
输入：6 6 3 2
输出：17