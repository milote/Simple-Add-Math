#include "MainApp.h"
#include "imgui.h"

namespace MainApp
{

    void RenderUI() {
        ImGui::Begin("Settings");
        ImGui::Button("Hello World!");
        static float value = 0.0f;
        ImGui::DragFloat("Value", &value);
        ImGui::End();
    }

}
