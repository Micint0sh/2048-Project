#pragma once

void ToEnd(int *line, int num);
void Merge(int *line);
void ClearZero(int *line);
void PrintMap(int map[][4]);
void Initialize(int map[][4]);
int ReadKey();
int ActionUp(int map[][4]);
int ActionDown(int map[][4]);
int ActionLeft(int map[][4]);
int ActionRight(int map[][4]);
int CheckFull(int map[][4]);
int CheckLose(int map[][4]);
