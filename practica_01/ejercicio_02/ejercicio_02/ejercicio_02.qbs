import qbs

QtApplication {
    cpp.defines: [
        // You can make your code fail to compile if it uses deprecated APIs.
        // In order to do so, uncomment the following line.
        //"QT_DISABLE_DEPRECATED_BEFORE=0x060000" // disables all the APIs deprecated before Qt 6.0.0
    ]

    consoleApplication: true
    install: true
    files: [
        "cilindro.cpp",
        "cilindro.h",
        "circulo.cpp",
        "circulo.h",
        "main.cpp",
    ]
}
