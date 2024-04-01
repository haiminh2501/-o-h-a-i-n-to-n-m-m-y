from ._anvil_designer import Form1Template
from anvil import *

class Form1(Form1Template):
  def __init__(self, **properties):
    # Set Form properties and Data Bindings.
    self.init_components(**properties)
  def bubble_sort(arr):
      n = len(arr)
      for i in range(n-1):
          for j in range(0, n-i-1):
              if arr[j] > arr[j+1] :
                  arr[j], arr[j+1] = arr[j+1], arr[j]
      return arr
    def btnSort_click(self, **event_args):
      # Chuyển đổi input từ người dùng thành list số nguyên
      numbers_list = [int(x) for x in self.txtInput.text.split(',')]
    
      # Kiểm tra lựa chọn thuật toán và sắp xếp
      if self.dropDown.selected_value == 'Bubble Sort':
          sorted_list = bubble_sort(numbers_list)
      # Thêm các điều kiện cho các thuật toán khác ở đây
    
      # Hiển thị kết quả
      self.lblResult.text = ', '.join(map(str, sorted_list))


      # Any code you write here will run before the form opens.
