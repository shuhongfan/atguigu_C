cmake_minimum_required(VERSION 3.22)
project(CProject C)

set(CMAKE_C_STANDARD 99)

add_executable(CProject main.c chapter01/01_Hello.c)

add_executable(01_Hello chapter01/01_Hello.c chapter01/02_CommentTest.c chapter01/03_HelloC.c chapter01/04_Printf.c chapter02/01_IdentifierTest.c chapter02/02_VariableTest.c chapter02/03_IntTest.c chapter02/04_FloatDoubleTest.c chapter02/05_CharTest.c chapter02/06_BooleanTest.c chapter02/07_ValueConvertTest.c chapter02/08_ConstantTest.c chapter02/09_IOTest.c chapter02/10_BinaryTest.c chapter03/01_AriTest.c chapter03/02_AriExer.c chapter03/03_SetValue.c chapter03/04_CompareTest.c chapter03/05_LogicTest.c chapter03/06_BitTest.c chapter03/07_ConditionTest.c chapter03/08_SizeOfTest.c chapter03/09_IfElseTest.c chapter03/10_IfElseTest1.c chapter03/11_IfElseTest2.c chapter03/12_SwitchCaseTest.c chapter03/13_SwitchCaseTest1.c chapter03/14_ForTest.c chapter03/15_ForTest1.c chapter03/16_WhileTest.c chapter03/17_WhileTest1.c chapter03/18_DoWhileTest.c chapter03/19_ATMTest.c chapter03/20_ForWhileTest.c chapter03/21_ForForTest.c chapter03/22_BreakContinueTest.c chapter03/23_BreakContinueTest1.c chapter03/24_gotoTest.c)
add_executable(main main.c)
add_executable(02_CommentTest chapter01/02_CommentTest.c)
add_executable(03_HelloC chapter01/03_HelloC.c)
add_executable(04_Printf chapter01/04_Printf.c)
add_executable(01_IdentifierTest chapter02/01_IdentifierTest.c)
add_executable(02_VariableTest chapter02/02_VariableTest.c)
add_executable(03_IntTest chapter02/03_IntTest.c)
add_executable(04_FloatDoubleTest chapter02/04_FloatDoubleTest.c)
add_executable(05_CharTest chapter02/05_CharTest.c)
add_executable(06_BooleanTest chapter02/06_BooleanTest.c)
add_executable(07_ValueConvertTest chapter02/07_ValueConvertTest.c)
add_executable(08_ConstantTest chapter02/08_ConstantTest.c)
add_executable(09_IOTest chapter02/09_IOTest.c)
add_executable(10_BinaryTest chapter02/10_BinaryTest.c)
add_executable(01_AriTest chapter03/01_AriTest.c chapter04/01_ArrayTest.c chapter04/02_ArrayTest1.c chapter04/03_ArrayTest2.c chapter04/04_ArrayExer.c chapter04/05_ArrayExer1.c chapter04/06_ArrayExer2.c chapter04/07_StringTest.c chapter04/08_ArrayMore.c chapter04/09_ArrayMore1.c chapter04/10_ArrayMoreExer.c chapter04/11_ArrayMoreExer1.c chapter04/12_ArrayMoreExer2.c chapter05/01_PointerTest.c chapter05/02_PointerTest1.c chapter05/03_PointerTest2.c chapter05/04_PointerTest3.c chapter05/05_PointerTest4.c chapter05/06_DoublePointer.c chapter05/07_DoublePointer1.c chapter05/08_PointerAndArray.c chapter05/09_PointerAndArray1.c chapter05/10_PointerArrayExer.c chapter05/11_PointerArrayExer1.c chapter05/12_PointerAndArray2.c chapter05/13_PointerAndArray3.c chapter05/14_PointerAndArray4.c chapter05/15_PointerAndArray5.c chapter05/16_PointerArray.c chapter05/17_CharArray.c chapter05/18_StringArray.c chapter05/19_PointerAndArray6.c chapter05/20_PointerAndArray7.c chapter06/01_FunctionDefine.c chapter06/02_FunctionDefine.c chapter06/03_FunctionDefine.c chapter06/04_Return.c chapter06/05_FunctionDefine.c chapter06/06_FunctionInvoke.c chapter06/07_FunctionExer.c chapter06/08_FunctionExer1.c chapter06/09_FunctionExer2.c chapter06/10_MainArgs.c chapter06/11_ExitTest.c chapter06/12_FunctionProtoType.c chapter06/13_FunctionProtoType1.c chapter06/14_VariableTransfer.c chapter06/15_ArgsTransfer.c chapter06/16_ArgsTransfer1.c chapter06/17_ArgsTransfer2.c chapter06/18_ArgsTransfer3.c chapter06/19_ArgsTransfer4.c chapter06/20_ArgsTransfer5.c chapter06/21_ArgsTransferExer.c chapter06/22_Test.cpp chapter06/23_RecursionFunctionTest.c chapter06/24_VariableArgsTest.c chapter06/25_PointerFunctionTest.c chapter06/26_PointerFunctionTest1.c chapter06/27_FunctionPointerTest.c chapter06/28_CallBackFunctionTest.c chapter06/29_VariableTest.c chapter06/30_VariableTest1.c chapter06/31_VariableTest2.c chapter06/32_VariableTest3.c chapter06/33_VariableTest4.c chapter06/34_ConstTest.c chapter07/01_StructTest.c chapter07/02_StructTest1.c chapter07/03_StructTest2.c chapter07/04_StructTest3.c chapter07/05_StructSize.c chapter07/06_StructTransfer.c chapter07/07_StructTransfer1.c chapter07/08_StructArray.c chapter07/09_StructArrayExer.c chapter07/10_StructArrayExer1.c chapter07/11_StructPointer.c chapter07/12_StructPointer1.c chapter07/13_StructPointerExer.c chapter07/14_StructPointer2.c chapter07/15_StructArrayPoint.c chapter07/16_StructApply.c chapter07/17_StructApply1.c chapter07/18_UnionTest.c chapter07/19_UnionExer.c chapter07/20_TypedefTest.c chapter07/21_TypedefExer.c chapter08/01_StringTest.c chapter08/02_StringFunctionTest.c chapter08/03_TimeTest.c chapter08/04_VoidPointTest.c chapter08/05_MallocTest.c chapter08/06_MallocExer.c chapter09/01_IOTest.c chapter09/02_OutputTest.c chapter09/03_InputTest.c)
add_executable(02_AriExer chapter03/02_AriExer.c)
add_executable(03_SetValue chapter03/03_SetValue.c)
add_executable(04_CompareTest chapter03/04_CompareTest.c)
add_executable(05_LogicTest chapter03/05_LogicTest.c)
add_executable(06_BitTest chapter03/06_BitTest.c)
add_executable(07_ConditionTest chapter03/07_ConditionTest.c)
add_executable(08_SizeOfTest chapter03/08_SizeOfTest.c)
add_executable(09_IfElseTest chapter03/09_IfElseTest.c)
add_executable(10_IfElseTest1 chapter03/10_IfElseTest1.c)
add_executable(11_IfElseTest2 chapter03/11_IfElseTest2.c)
add_executable(12_SwitchCaseTest chapter03/12_SwitchCaseTest.c)
add_executable(13_SwitchCaseTest1 chapter03/13_SwitchCaseTest1.c)
add_executable(14_ForTest chapter03/14_ForTest.c)
add_executable(15_ForTest1 chapter03/15_ForTest1.c)
add_executable(16_WhileTest chapter03/16_WhileTest.c)
add_executable(17_WhileTest1 chapter03/17_WhileTest1.c)
add_executable(18_DoWhileTest chapter03/18_DoWhileTest.c)
add_executable(19_ATMTest chapter03/19_ATMTest.c)
add_executable(20_ForWhileTest chapter03/20_ForWhileTest.c)
add_executable(21_ForForTest chapter03/21_ForForTest.c)
add_executable(22_BreakContinueTest chapter03/22_BreakContinueTest.c)
add_executable(23_BreakContinueTest1 chapter03/23_BreakContinueTest1.c)
add_executable(24_gotoTest chapter03/24_gotoTest.c)
add_executable(01_ArrayTest chapter04/01_ArrayTest.c)
add_executable(02_ArrayTest1 chapter04/02_ArrayTest1.c)
add_executable(03_ArrayTest2 chapter04/03_ArrayTest2.c)
add_executable(04_ArrayExer chapter04/04_ArrayExer.c)
add_executable(05_ArrayExer1 chapter04/05_ArrayExer1.c)
add_executable(06_ArrayExer2 chapter04/06_ArrayExer2.c)
add_executable(07_StringTest chapter04/07_StringTest.c)
add_executable(08_ArrayMore chapter04/08_ArrayMore.c)
add_executable(09_ArrayMore1 chapter04/09_ArrayMore1.c)
add_executable(10_ArrayMoreExer chapter04/10_ArrayMoreExer.c)
add_executable(11_ArrayMoreExer1 chapter04/11_ArrayMoreExer1.c)
add_executable(12_ArrayMoreExer2 chapter04/12_ArrayMoreExer2.c)
add_executable(02_PointerTest1 chapter05/02_PointerTest1.c)
add_executable(01_PointerTest chapter05/01_PointerTest.c)
add_executable(03_PointerTest2 chapter05/03_PointerTest2.c)
add_executable(04_PointerTest3 chapter05/04_PointerTest3.c)
add_executable(05_PointerTest4 chapter05/05_PointerTest4.c)
add_executable(06_DoublePointer chapter05/06_DoublePointer.c)
add_executable(07_DoublePointer1 chapter05/07_DoublePointer1.c)
add_executable(08_PointerAndArray chapter05/08_PointerAndArray.c)
add_executable(09_PointerAndArray1 chapter05/09_PointerAndArray1.c)
add_executable(10_PointerArrayExer chapter05/10_PointerArrayExer.c)
add_executable(11_PointerArrayExer1 chapter05/11_PointerArrayExer1.c)
add_executable(12_PointerAndArray2 chapter05/12_PointerAndArray2.c)
add_executable(13_PointerAndArray3 chapter05/13_PointerAndArray3.c)
add_executable(14_PointerAndArray4 chapter05/14_PointerAndArray4.c)
add_executable(15_PointerAndArray5 chapter05/15_PointerAndArray5.c)
add_executable(16_PointerArray chapter05/16_PointerArray.c)
add_executable(17_CharArray chapter05/17_CharArray.c)
add_executable(18_StringArray chapter05/18_StringArray.c)
add_executable(19_PointerAndArray6 chapter05/19_PointerAndArray6.c)
add_executable(20_PointerAndArray7 chapter05/20_PointerAndArray7.c)
add_executable(02_FunctionDefine chapter06/02_FunctionDefine.c)
add_executable(04_Return chapter06/04_Return.c)
add_executable(06_FunctionInvoke chapter06/06_FunctionInvoke.c)
add_executable(07_FunctionExer chapter06/07_FunctionExer.c)
add_executable(08_FunctionExer1 chapter06/08_FunctionExer1.c)
add_executable(09_FunctionExer2 chapter06/09_FunctionExer2.c)
add_executable(10_MainArgs chapter06/10_MainArgs.c)
add_executable(11_ExitTest chapter06/11_ExitTest.c)
add_executable(14_VariableTransfer chapter06/14_VariableTransfer.c)
add_executable(15_ArgsTransfer chapter06/15_ArgsTransfer.c)
add_executable(16_ArgsTransfer1 chapter06/16_ArgsTransfer1.c)
add_executable(17_ArgsTransfer2 chapter06/17_ArgsTransfer2.c)
add_executable(18_ArgsTransfer3 chapter06/18_ArgsTransfer3.c)
add_executable(19_ArgsTransfer4 chapter06/19_ArgsTransfer4.c)
add_executable(20_ArgsTransfer5 chapter06/20_ArgsTransfer5.c)
add_executable(21_ArgsTransferExer chapter06/21_ArgsTransferExer.c)
add_executable(23_RecursionFunctionTest chapter06/23_RecursionFunctionTest.c)
add_executable(24_VariableArgsTest chapter06/24_VariableArgsTest.c)
add_executable(25_PointerFunctionTest chapter06/25_PointerFunctionTest.c)
add_executable(26_PointerFunctionTest1 chapter06/26_PointerFunctionTest1.c)
add_executable(27_FunctionPointerTest chapter06/27_FunctionPointerTest.c)
add_executable(28_CallBackFunctionTest chapter06/28_CallBackFunctionTest.c)

add_executable(29_VariableTest chapter06/29_VariableTest.c)
add_executable(30_VariableTest1 chapter06/30_VariableTest1.c)

add_executable(32_VariableTest3 chapter06/32_VariableTest3.c)
add_executable(33_VariableTest4 chapter06/33_VariableTest4.c)
add_executable(01_StructTest chapter07/01_StructTest.c)
add_executable(02_StructTest1 chapter07/02_StructTest1.c)

add_executable(03_StructTest2 chapter07/03_StructTest2.c)
add_executable(04_StructTest3 chapter07/04_StructTest3.c)
add_executable(05_StructSize chapter07/05_StructSize.c)
add_executable(06_StructTransfer chapter07/06_StructTransfer.c)
add_executable(07_StructTransfer1 chapter07/07_StructTransfer1.c)
add_executable(08_StructArray chapter07/08_StructArray.c)

add_executable(09_StructArrayExer chapter07/09_StructArrayExer.c)
add_executable(10_StructArrayExer1 chapter07/10_StructArrayExer1.c)
add_executable(12_StructPointer1 chapter07/12_StructPointer1.c)
add_executable(11_StructPointer chapter07/11_StructPointer.c)
add_executable(13_StructPointerExer chapter07/13_StructPointerExer.c)
add_executable(14_StructPointer2 chapter07/14_StructPointer2.c)
add_executable(15_StructArrayPoint chapter07/15_StructArrayPoint.c)
add_executable(16_StructApply chapter07/16_StructApply.c)
add_executable(17_StructApply1 chapter07/17_StructApply1.c)
add_executable(18_UnionTest chapter07/18_UnionTest.c)
add_executable(20_TypedefTest chapter07/20_TypedefTest.c)
add_executable(21_TypedefExer chapter07/21_TypedefExer.c)
add_executable(01_StringTest chapter08/01_StringTest.c)
add_executable(02_StringFunctionTest chapter08/02_StringFunctionTest.c)
add_executable(03_TimeTest chapter08/03_TimeTest.c)
add_executable(04_VoidPointTest chapter08/04_VoidPointTest.c)
add_executable(05_MallocTest chapter08/05_MallocTest.c)

add_executable(06_MallocExer chapter08/06_MallocExer.c)
add_executable(01_IOTest chapter09/01_IOTest.c)
add_executable(02_OutputTest chapter09/02_OutputTest.c)
add_executable(03_InputTest chapter09/03_InputTest.c)