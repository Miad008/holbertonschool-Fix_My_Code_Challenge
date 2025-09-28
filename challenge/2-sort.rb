#!/usr/bin/env ruby
# Sort numbers and strings correctly

puts ARGV.sort_by { |arg| Integer(arg) rescue arg }

