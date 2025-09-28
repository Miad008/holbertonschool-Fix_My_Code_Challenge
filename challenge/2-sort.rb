#!/usr/bin/env ruby


nums = ARGV.map(&:to_i)
sorted = nums.sort
sorted.each { |n| puts n }
