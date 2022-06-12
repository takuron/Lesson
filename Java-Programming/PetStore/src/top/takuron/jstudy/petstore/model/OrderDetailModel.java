package top.takuron.jstudy.petstore.model;

public class OrderDetailModel {
    private OrderModel order;
    private ProductModel product;

    public OrderModel getOrder() {
        return order;
    }

    public void setOrder(OrderModel order) {
        this.order = order;
    }

    public ProductModel getProduct() {
        return product;
    }

    public void setProduct(ProductModel product) {
        this.product = product;
    }

    public Integer getQuantity() {
        return quantity;
    }

    public void setQuantity(Integer quantity) {
        this.quantity = quantity;
    }

    public Double getUnicost() {
        return unicost;
    }

    public void setUnicost(Double unicost) {
        this.unicost = unicost;
    }

    private Integer quantity;
    private Double unicost;

    public Integer getId() {
        return id;
    }

    public void setId(Integer id) {
        this.id = id;
    }

    private Integer id;
}
