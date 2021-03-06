
# This file is auto-generated from convchecker.idl
# *** DO NOT EDIT ***


import sys
import msgpack


class config_data:
  def __init__(self, config):
    self.config = config

  def to_msgpack(self):
    return (
      self.config,
      )

  @staticmethod
  def from_msgpack(arg):
    return config_data(
      arg[0])

class datum:
  def __init__(self, string_values, num_values):
    self.string_values = string_values
    self.num_values = num_values

  def to_msgpack(self):
    return (
      self.string_values,
      self.num_values,
      )

  @staticmethod
  def from_msgpack(arg):
    return datum(
      [ (elem_arg_0_[0], elem_arg_0_[1])  for elem_arg_0_ in arg[0]],
      [ (elem_arg_1_[0], elem_arg_1_[1])  for elem_arg_1_ in arg[1]])


