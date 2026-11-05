# 作业 2：求平均年龄

输入 `n`，再输入 `n` 个年龄，输出平均值（保留两位小数）。

## 文件

- `2/main.c`：源码
- `2.xcodeproj`：Xcode 工程（源码目录和工程文件必须保持同级）

## 运行

```bash
gcc 2/main.c -o /tmp/avg && printf "3\n18 19 20\n" | /tmp/avg
```

预期输出：

```
19.00
```

## 要点

- `(double)sum / n` 必须先转 `double`，否则整数除法会丢小数
- `%.2f` 控制两位小数
