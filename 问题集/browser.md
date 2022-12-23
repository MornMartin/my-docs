# Browser

## 按住鼠标左键时，单击/按下鼠标右键或鼠标滚轮，除第一次外，之后得到的事件对象`button`值不正确
- 暂无解决/规避方案

## 通过`createElement`创建的`video`标签无法实现自动播放
1. 创建外层包裹元素
2. 通过给容器元素设置`innerHTML`的方式创建`video`标签
3. 通过容器元素调用`querySelector`获取`video`节点，调用播放
* 代码示例：
    ```ts
        const wrap = document.createElement('div');
        wrap.innerHTML = `<video muted src="XXX"></video>`;
        //@todo 将wrap塞入文档节点中
        const video = wrap.querySelector('video')
        video.play();
    ```