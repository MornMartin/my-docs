# Typescript

## 如何在项目运行时执行TS代码？
1. 引入`typescript`作为项目依赖
2. 调用`typescript.transpile`方法先将ts代码转为js代码，再调用`eval`函数执行。[参](https://github.com/microsoft/TypeScript/blob/main/src/services/transpile.ts#L114)
