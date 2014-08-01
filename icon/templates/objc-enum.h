typedef NS_ENUM(unichar , HRFonts) {
<% @glyphs.each do |name, value| %>
	<%= name %> = 0x<%= value[:codepoint].to_s(16) %>,<% end %>
};