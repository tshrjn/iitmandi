if (typeof jQuery !== 'undefined' && typeof NcbiBooksToc == "undefined") {
    var NcbiBooksToc = function ($j) {
        
        jQuery(document) .ready(function () {
            
                    
            //check cockies
            jQuery('.body-content ul.toc') .filter(function () {
                return jQuery.cookie(jQuery(this) .attr('id'));
            }) .bkSwitchListClass('init');
            
            // set init state
            jQuery('.source').bkInitToc();
            
            // main toggle (live for ajax call in standalone)
            jQuery('a.bktoc_tgllnk').live('click', function () {
                var subs = jQuery(this) .siblings('ul');
                if (jQuery(subs) .is(':hidden')) {
                    subs.slideDown() .bkSwitchListClass();
                } else {
                    subs.slideUp() .bkSwitchListClass();
                }
                jQuery(this).bkSwitchLinkClass();
                bkAdjustButtons();
            });
            
            //expand, collapse all
            jQuery('.bktoc_all_cntnr a').click(function () {
                var l = jQuery(this);
                if (l.hasClass('inactive')) {
                    return false;
                }
                if (l.hasClass('bktoc_all_exp')) {
                    jQuery.each(jQuery('.bktoc_lst_clps'), function () {
                        jQuery(this).show().bkSwitchListClass();
                    });
                   jQuery('a.bktoc_tgllnk_clps').bkSwitchLinkClass();
                } else {
                    jQuery.each(jQuery('.bktoc_lst_exp'), function () {
                        jQuery(this).hide().bkSwitchListClass();
                    });
                    jQuery('a.bktoc_tgllnk_exp').bkSwitchLinkClass();
                }                
                bkAdjustButtons();
                return false;
            });
        });
        
        /** functions **/
        
        jQuery.fn.bkSwitchListClass = function (state) {
            var e = jQuery(this);
            e.toggleClass('bktoc_lst_clps');
            e.toggleClass('bktoc_lst_exp');
            id = e.attr('id');
            if (id && state != 'init') {
                bkToggleCockie(id);
            }
        };
        
        jQuery.fn.bkSwitchLinkClass = function () {
            el = jQuery(this);
            el.toggleClass('bktoc_tgllnk_clps');
            el.toggleClass('bktoc_tgllnk_exp');
        };
        
        jQuery.fn.bkInitToc = function () {
            jQuery('.bktoc_lst_clps').hide().parent() .prepend('<a class="bktoc_tgllnk bktoc_tgllnk_clps"></a>');
            jQuery('.bktoc_lst_exp').parent().prepend('<a class="bktoc_tgllnk bktoc_tgllnk_exp"></a>');
            /*add buttons*/
            bkSetButtons();
            /** popup-toc current**/
            var curr = jQuery('a#bk_current_entry');
            var ancs = curr.parents('ul.bktoc_lst_clps');
            if (curr && ancs) {
                curr.siblings('ul.bktoc_lst_clps').show() .bkSwitchListClass();
                curr.prev('a.bktoc_tgllnk_clps').bkSwitchLinkClass();
                ancs.show() .bkSwitchListClass();
                ancs.siblings('a.bktoc_tgllnk_clps').bkSwitchLinkClass();
            }
        };
        
        function bkToggleCockie(i) {
            if (jQuery.cookie(i)) {
                jQuery.cookie(i, null);
            } else {
                jQuery.cookie(i, true);
            }
        };
        
        //buttons
        function bkSetButtons() {
            jQuery('.bktoc_all_cntnr').show();
            bkAdjustButtons();
        };
        
        function bkAdjustButtons() {
            if (jQuery('.bktoc_all_cntnr').length == 0) return;
            var ea = jQuery('.bktoc_all_exp');
            var ca = jQuery('.bktoc_all_clps');
            var c = 'inactive';
            (jQuery('ul.bktoc_lst_clps').length == 0)? ea.addClass(c): ea.removeClass(c);
            (jQuery('ul.bktoc_lst_exp').length == 0)? ca.addClass(c): ca.removeClass(c);
        };
    }
    (jQuery);
}