//
// Created by Anurag Kyal on 2019-05-23.
//

#ifndef SKIA_HELLOWORLDANURAG_H
#define SKIA_HELLOWORLDANURAG_H

#include "tools/sk_app/Application.h"
#include "tools/sk_app/Window.h"

class SkCanvas;

class HelloWorldAnurag : public sk_app::Application, sk_app::Window::Layer {
public:
    HelloWorldAnurag(int argc, char** argv, void* platformData);
    ~HelloWorldAnurag() override;

    void onIdle() override;

    void onBackendCreated() override;
    void onPaint(SkSurface*) override;
    bool onChar(SkUnichar c, uint32_t modifiers) override;

private:
    void updateTitle();

    sk_app::Window* fWindow;
    sk_app::Window::BackendType fBackendType;

    SkScalar fRotationAngle;
};



#endif //SKIA_HELLOWORLDANURAG_H
