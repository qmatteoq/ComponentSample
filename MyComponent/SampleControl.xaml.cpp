#include "pch.h"
#include "SampleControl.xaml.h"
#if __has_include("SampleControl.g.cpp")
#include "SampleControl.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::MyComponent::implementation
{
    SampleControl::SampleControl()
    {
        InitializeComponent();
    }

    int32_t SampleControl::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void SampleControl::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void SampleControl::myButton_Click(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));
    }
}
