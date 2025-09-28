# 2-sort.rb
# Sort numbers only, ignore non-numeric arguments

puts ARGV.map { |arg| Integer(arg) rescue nil }.compact.sort

