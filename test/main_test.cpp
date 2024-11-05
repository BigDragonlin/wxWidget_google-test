#include <gtest/gtest.h>
#include <wx/wx.h>

class YourApp : public wxFrame
{
public:
    YourApp(const wxString& title);
};

YourApp::YourApp(const wxString& title)
        : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(800, 600))
{
    // 初始化代码，例如添加控件
    wxPanel* panel = new wxPanel(this, wxID_ANY);
    wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);
    wxButton* button = new wxButton(panel, wxID_ANY, "Click Me");
    sizer->Add(button, 0, wxALL | wxCENTER, 10);
    panel->SetSizer(sizer);
}
//测试wxx.cpp
TEST(WxxTest, HandleWxx){
    YourApp *frame = new YourApp("Hello wxWidgets");
    frame->Show(true);
}
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();  // 运行所有测试
}
