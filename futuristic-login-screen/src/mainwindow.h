class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_loginButton_clicked();

private:
    void setupUi();
    void handleLogin();

    QLineEdit *usernameInput;
    QLineEdit *passwordInput;
    QPushButton *loginButton;
};