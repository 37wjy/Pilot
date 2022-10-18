## report

1. 一个文件夹 runtime，里面是 Piccolo Runtime 部分的代码;
2. 一个文件夹 editor，里面是 Piccolo Editor 部分的代码
3. Games104_homework4_report.doc 或 Games104_homework4_report.docx
    * 新增或修改属性的定义及意义说明

    * 新增或修改属性在 Components Details 面板上显示的截图

    * 使该属性在其系统内生效的代码说明，包括代码解释及实现思路说明

4. Games104_homework4_report.MP4，展示新增或修改属性在其系统内生效
的效果。


__________

Component 结构：

    m_parent_object
    
    m_is_dirty  //记录标脏

    postLoadResource

    tick


m_editor_ui_creator 下对所有类型值有对应lambda绘制函数

### editor_ui.cpp

1. 基础:[40 分] 掌握反射宏及反射标签用法，正确完成反射信息标注。

    如何将component注册到反射 

    ```c++
        namespace Reflection 
        { 
            namespace TypeFieldReflectionOparator 
            { 
                class TypeTransformComponentOperator; 
            } 
        };

        // class 内友元
        friend class Reflection::TypeFieldReflectionOparator::TypeTransformComponentOperator; 
        friend class PSerializer;
    
    ```

    ReflectionGenerator 下生成缓存文件 reflection.gen.h， Mustache


    新增component类型，在 EditorUI中 m_editor_ui_creator 

    std::unordered_map<std::string, std::function<void(std::string, void*)>> m_editor_ui_creator; 加方法


2. 基础:[40 分] 掌握反射访问器的用法，读懂 UI 生成代码，能够在 Detail 面 板正确显示新增或修改属性。


3. 提高:[20 分] 使新增或修改属性在其系统内按照预期生效。

