#pragma once

#include "winrt/Microsoft.UI.Xaml.h"
#include "winrt/Microsoft.UI.Xaml.Markup.h"
#include "winrt/Microsoft.UI.Xaml.Controls.Primitives.h"
#include "SampleControl.g.h"

namespace winrt::MyComponent::implementation
{
    struct SampleControl : SampleControlT<SampleControl>
    {
        SampleControl();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void myButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::MyComponent::factory_implementation
{
    struct SampleControl : SampleControlT<SampleControl, implementation::SampleControl>
    {
    };
}
