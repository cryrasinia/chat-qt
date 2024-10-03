#include "../include/Message.hpp"

Message::Message(const std::string &text_tmp)
{
	text = text_tmp;
}

nlohmann::json Message::toJSON()const
{
	nlohmann::json j;

	j["msg_text"] = text;

	return j;
}
