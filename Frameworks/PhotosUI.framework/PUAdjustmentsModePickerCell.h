/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAdjustmentsModePickerCell : UITableViewCell {
    UIButton * _accessoryButton;
    NSArray * _accessoryButtonConstraints;
    id /* block */  _buttonAction;
    int  _buttonType;
    NSString * _currentDisplayValue;
    UILabel * _displayValueLabel;
    NSArray * _displayValueLabelConstraints;
    BOOL  _isSubMode;
    NSString * _localizedModeName;
    UIImage * _modeIcon;
}

@property (nonatomic, copy) id /* block */ buttonAction;
@property (nonatomic) int buttonType;
@property (nonatomic, copy) NSString *currentDisplayValue;
@property (nonatomic) BOOL isSubMode;
@property (nonatomic, copy) NSString *localizedModeName;
@property (nonatomic, retain) UIImage *modeIcon;

+ (void)configureModePickerCellLabel:(id)arg1;

- (void).cxx_destruct;
- (void)_handleAccessoryButton:(id)arg1;
- (void)_updateButton;
- (void)_updateDisplayValueLabel;
- (id /* block */)buttonAction;
- (int)buttonType;
- (id)currentDisplayValue;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isSubMode;
- (id)localizedModeName;
- (id)modeIcon;
- (void)prepareForReuse;
- (void)setButtonAction:(id /* block */)arg1;
- (void)setButtonType:(int)arg1;
- (void)setCurrentDisplayValue:(id)arg1;
- (void)setIsSubMode:(BOOL)arg1;
- (void)setLocalizedModeName:(id)arg1;
- (void)setModeIcon:(id)arg1;

@end
