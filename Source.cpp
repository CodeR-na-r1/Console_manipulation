#include <iostream>

#include "Console_manipulation.h"

using namespace std;

int main()
{
	Console_manipulation cm;

	cout << "Just text\n\n";

	cm.set_text_color(Text_color::Red);
	cout << "Red text\n\n";

	cm.set_text_color(Text_color::Green);
	cout << "Green text\n\n";

	cm.set_params(Text_state::Bold, Text_color::Red);
	cout << "Bold red text\n\n";

	cm.reset_all();
	cout << "just text\n\n";

	cout << "hide_cursor\n\n";
	cm.hide_cursor();
	Sleep(800);

	cout << "set_size_console\n\n";
	Sleep(800);
	cm.set_size_console(200, 200, 800, 400);
	Sleep(800);

	cout << "show_cursor\n\n";
	Sleep(800);
	cm.show_cursor();

	cout << "set_size_console\none test\ntwo test\nthree test\nfour text";

	cm.save_now_cursor_pos();

	cm.set_cursor_pos_on_prev_str();
	cout << "delete three text (set_cursor_pos_on_prev_str)";
	cm.shift_coordinates(0, -2);
	cout << "\rdeleted ";

	cm.load_saved_cursor_pos();
	cout << "\nend\n\n";

	return 0;
}