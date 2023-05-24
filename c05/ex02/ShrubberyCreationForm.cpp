#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137) , _target(target)
{
    std::cout << "Parm Constructor Called ShrubberyCreationForm()" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)  , _target("Default")
{
    std::cout << "Defalut Constructor Called ShrubberyCreationForm()" << std::endl;
}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm("ShrubberyCreationForm", 145, 137)  , _target(other.getTarget())
{
	std::cout << "Copy Constructor Called ShrubberyCreationForm()" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

ShrubberyCreationForm            &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
    if (&rhs != this)
    {
        this->_target = rhs.getTarget();
    }
	std::cout << "Copy Assignment Operator ShrubberyCreationForm()" << std::endl;
    return (*this);
}

std::string                      ShrubberyCreationForm::getTarget()const { return _target;} 

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getStatus())
    {
        if (executor.getGrade() <= this->getExecuteGrade())
        {
            std::ofstream target_file((this->getTarget()+"_shrubbery").c_str());
            if (!target_file)
            {
                std::cout << "Failed to create file" << std::endl;
                return;
            }
            target_file << " ###########################  V##'############################" << std::endl;
			target_file << " ###########################'`################################" << std::endl;
			target_file << " #########################V'  `V  ############################" << std::endl;
			target_file << " ########################V'      ,############################" << std::endl;
			target_file << " #########`#############V      ,A###########################V" << std::endl;
			target_file << " ########' `###########V      ,###########################V',#" << std::endl;
			target_file << " ######V'   ###########l      ,####################V~~~~'',###" << std::endl;
			target_file << " #####V'    ###########l      ##P' ###########V~~'   ,A#######" << std::endl;
			target_file << " #####l      d#########l      V'  ,#######V~'       A#########" << std::endl;
			target_file << " #####l      ##########l         ,####V''         ,###########" << std::endl;
			target_file << " #####l        `V######l        ,###V'   .....;A##############" << std::endl;
			target_file << " #####A,         `######A,     ,##V' ,A#######################" << std::endl;
			target_file << " #######A,        `######A,    #V'  A########'''''##########''" << std::endl;
			target_file << " ##########,,,       `####A,           `#''           '''  ,,," << std::endl;
			target_file << " #############A,                               ,,,     ,######" << std::endl;
			target_file << " ######################oooo,                 ;####, ,#########" << std::endl;
			target_file << " ##################P'                   A,   ;#####V##########" << std::endl;
			target_file << " #####P'    ''''       ,###             `#,     `V############" << std::endl;
			target_file << " ##P'                ,d###;              ##,       `V#########" << std::endl;
			target_file << " ##########A,,   #########A              )##,    ##A,..,ooA###" << std::endl;
			target_file << " #############A, Y#########A,            )####, ,#############" << std::endl;
			target_file << " ###############A ############A,        ,###### ##############" << std::endl;
			target_file << " ###############################       ,#######V##############" << std::endl;
			target_file << " ###############################      ,#######################" << std::endl;
			target_file << " ##############################P    ,d########################" << std::endl;
			target_file << " ##############################'    d#########################" << std::endl;
			target_file << " ##############################     ##########################" << std::endl;
			target_file << " ##############################     ##########################" << std::endl;
			target_file << " #############################P     ##########################" << std::endl;
			target_file << " #############################'     ##########################" << std::endl;
			target_file << " ############################P      ##########################" << std::endl;
			target_file << " ###########################P'     ;##########################" << std::endl;
			target_file << " ###########################'     ,###########################" << std::endl;
			target_file << " ##########################       ############################" << std::endl;
			target_file << " #########################       ,############################" << std::endl;
			target_file << " ########################        d###########P'    `Y#########" << std::endl;
			target_file << " #######################        ,############        #########" << std::endl;
			target_file << " ######################        ,#############        #########" << std::endl;
			target_file << " #####################        ,##############b.    ,d#########" << std::endl;
			target_file << " ####################        ,################################" << std::endl;
			target_file << " ###################         #################################" << std::endl;
			target_file << " ##################          #######################P'  `V##P'" << std::endl;
			target_file << " #######P'     `V#           ###################P'" << std::endl;
			target_file << " #####P'                    ,#################P'" << std::endl;
			target_file << " ###P'                      d##############P''" << std::endl;
			target_file << " ##P'                       V##############'" << std::endl;
			target_file << " #P'                         `V###########'" << std::endl;
			target_file << " #'                             `V##P'" << std::endl;
        }
        else
            throw AForm::GradeTooLowException();
    }
    else
        throw FormNotSigned();
}