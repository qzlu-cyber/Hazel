#include <Hazel.h>

class Sandbox : public Hazel::Application
{
public:
	Sandbox();
	~Sandbox();

private:

};

Sandbox::Sandbox()
{
}

Sandbox::~Sandbox()
{
}

// ���������ڵ��ƶ�������Ĵ����У�Sandbox ֻ�۽�ʵ��Ӧ��
Hazel::Application* Hazel::CreateApplication() {
	return new Sandbox();
}